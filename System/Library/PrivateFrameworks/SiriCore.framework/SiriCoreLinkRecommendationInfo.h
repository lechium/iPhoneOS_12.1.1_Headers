/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SiriCoreLinkRecommendationInfo : NSObject {

	BOOL _btPreference;
	BOOL _wifiPreference;
	double _timeTaken;

}
-(void)setTimeTaken:(double)arg1 ;
-(double)timeTaken;
-(id)initWithPreferences:(BOOL)arg1 wifiPreference:(BOOL)arg2 timeTaken:(double)arg3 metrics:(id)arg4 ;
-(BOOL)btPreference;
-(void)setBTPreference:(BOOL)arg1 ;
-(BOOL)wifiPreference;
-(void)setWiFiPreference:(BOOL)arg1 ;
-(void)setLinkMetrics:(id)arg1 ;
-(id)linkMetrics;
-(void)resetLinkMetrics;
@end

