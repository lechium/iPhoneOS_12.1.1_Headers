/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class SGMFoundInAppsICS;

@interface SGSuggestionsICSMetrics : NSObject {

	SGMFoundInAppsICS* _foundInAppsICS;

}

@property (nonatomic,retain) SGMFoundInAppsICS * foundInAppsICS;              //@synthesize foundInAppsICS=_foundInAppsICS - In the implementation block
+(id)instance;
+(void)recordWithTimezoneValue:(SGMFoundInAppsICSTZValue_)arg1 datetimeType:(SGMFoundInAppsDatetimeType_)arg2 ;
-(SGMFoundInAppsICS *)foundInAppsICS;
-(void)setFoundInAppsICS:(SGMFoundInAppsICS *)arg1 ;
-(id)init;
@end

