/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXAnalyticsReporting.h>

@class NSMutableDictionary, NSString;

@interface SXVideoAnalyticsRouter : NSObject <SXAnalyticsReporting> {

	BOOL _hasReroutedInitiatedPlaybackEvent;
	unsigned long long _currentPlaybackLocation;
	unsigned long long _initiatedPlaybackLocation;
	NSMutableDictionary* _reporters;

}

@property (nonatomic,readonly) unsigned long long initiatedPlaybackLocation;              //@synthesize initiatedPlaybackLocation=_initiatedPlaybackLocation - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * reporters;                           //@synthesize reporters=_reporters - In the implementation block
@property (assign,nonatomic) BOOL hasReroutedInitiatedPlaybackEvent;                      //@synthesize hasReroutedInitiatedPlaybackEvent=_hasReroutedInitiatedPlaybackEvent - In the implementation block
@property (assign,nonatomic) unsigned long long currentPlaybackLocation;                  //@synthesize currentPlaybackLocation=_currentPlaybackLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reportEvent:(id)arg1 ;
-(void)setAnalyticsReporter:(id)arg1 forPlaybackLocation:(unsigned long long)arg2 ;
-(NSMutableDictionary *)reporters;
-(id)analyticsReporterForEvent:(id)arg1 ;
-(unsigned long long)currentPlaybackLocation;
-(id)reporterForPlaybackLocation:(unsigned long long)arg1 ;
-(unsigned long long)initiatedPlaybackLocation;
-(BOOL)hasReroutedInitiatedPlaybackEvent;
-(void)setHasReroutedInitiatedPlaybackEvent:(BOOL)arg1 ;
-(id)initWithInitiatedPlaybackLocation:(unsigned long long)arg1 analyticsReporter:(id)arg2 ;
-(void)setCurrentPlaybackLocation:(unsigned long long)arg1 ;
@end

