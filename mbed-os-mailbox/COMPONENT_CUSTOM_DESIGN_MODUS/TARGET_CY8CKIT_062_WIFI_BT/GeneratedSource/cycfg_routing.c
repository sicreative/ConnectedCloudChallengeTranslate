/*******************************************************************************
* File Name: cycfg_routing.c
*
* Description:
* Establishes all necessary connections between hardware elements.
* This file was automatically generated and should not be modified.
* Tools Package 2.1.0.1266
* psoc6pdl 1.4.0.1889
* personalities 1.0.0.0
* udd 1.1.3.51
*
********************************************************************************
* Copyright 2020 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#include "cycfg_routing.h"

#include "cy_device_headers.h"

void init_cycfg_routing(void)
{
	HSIOM->AMUX_SPLIT_CTL[2] = HSIOM_AMUX_SPLIT_CTL_SWITCH_AA_SL_Msk |
		HSIOM_AMUX_SPLIT_CTL_SWITCH_AA_SR_Msk |
		HSIOM_AMUX_SPLIT_CTL_SWITCH_BB_SL_Msk |
		HSIOM_AMUX_SPLIT_CTL_SWITCH_BB_SR_Msk;
	HSIOM->AMUX_SPLIT_CTL[4] = HSIOM_AMUX_SPLIT_CTL_SWITCH_AA_SL_Msk |
		HSIOM_AMUX_SPLIT_CTL_SWITCH_AA_SR_Msk |
		HSIOM_AMUX_SPLIT_CTL_SWITCH_BB_SL_Msk |
		HSIOM_AMUX_SPLIT_CTL_SWITCH_BB_SR_Msk;
}
