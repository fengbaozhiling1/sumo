#!/usr/bin/env python
# Eclipse SUMO, Simulation of Urban MObility; see https://eclipse.org/sumo
# Copyright (C) 2019-2019 German Aerospace Center (DLR) and others.
# This program and the accompanying materials
# are made available under the terms of the Eclipse Public License v2.0
# which accompanies this distribution, and is available at
# http://www.eclipse.org/legal/epl-v20.html
# SPDX-License-Identifier: EPL-2.0

# @file    runner.py
# @author  Michael Behrisch
# @date    2019-05-01
# @version $Id$

from __future__ import absolute_import
from __future__ import print_function


import os
import subprocess
import sys
if 'SUMO_HOME' in os.environ:
    tools = os.path.join(os.environ['SUMO_HOME'], 'tools')
    sys.path.append(tools)
else:
    sys.exit("please declare environment variable 'SUMO_HOME'")
from sumolib import checkBinary  # noqa

traasJar = os.path.join(os.environ['SUMO_HOME'], "bin", "TraaS.jar")
assert(os.path.exists(traasJar))

subprocess.check_call(["javac", "-cp", traasJar, "data/APITest.java"])
subprocess.check_call(["java", "-cp", os.pathsep.join([traasJar, "data"]), "APITest",
                       checkBinary('sumo'), "data/config.sumocfg"])
