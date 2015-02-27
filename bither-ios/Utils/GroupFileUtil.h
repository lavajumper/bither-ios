//
//  GroupFileUtil.h
//  bither-ios
//
//  Copyright 2014 http://Bither.net
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//
//  Created by songchenwen on 2015/2/27.
//

#import <Foundation/Foundation.h>

@interface GroupFileUtil : NSObject
typedef enum {
    USDG, CNYG, EURG, GBPG, JPYG, KRWG, CADG, AUDG
} GroupCurrency;

typedef enum {
    UnitBTCG, UnitbitsG
} GroupBitcoinUnit;

+(GroupCurrency)defaultCurrency;

+(void)setDefaultCurrency:(GroupCurrency)currency;

+(GroupBitcoinUnit)defaultBitcoinUnit;

+(void)setDefaultBitcoinUnit:(GroupBitcoinUnit)unit;

+(void)setTotalBalanceWithHDM:(long long)hdm hot:(long long)hot andCold:(long long)cold;

+(NSDictionary*)totalBalance;

+(NSURL*)currencyRateFile;

+(NSURL*)tickerFile;

+(NSString*)readFile:(NSURL*)url;

+(BOOL)writeFile:(NSURL*)url content:(NSString*)content;
@end
