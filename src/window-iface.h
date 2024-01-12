// SPDX-FileCopyrightText: 2022-2024 Geoffrey D. Bennett <g@b4.vu>
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#include "alsa.h"

void create_card_window(struct alsa_card *card);
void create_no_card_window(void);
void destroy_card_window(struct alsa_card *card);
