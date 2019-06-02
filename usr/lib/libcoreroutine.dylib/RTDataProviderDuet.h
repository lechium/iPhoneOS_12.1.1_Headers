/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTDataProviderEvent.h>

@class RTLocationTagger, RTDefaultsManager, NSMutableArray;

@interface RTDataProviderDuet : RTDataProviderEvent {

	RTLocationTagger* _locationTagger;
	RTDefaultsManager* _defaultsManager;
	NSMutableArray* _duetHelpers;

}

@property (nonatomic,retain) NSMutableArray * duetHelpers;              //@synthesize duetHelpers=_duetHelpers - In the implementation block
-(void)_purge;
-(void)_shutdown;
-(id)initWithPurgeManager:(id)arg1 locationTagger:(id)arg2 defaultsManager:(id)arg3 ;
-(id)duetHelperForDuetEventStream:(long long)arg1 ;
-(id)supportedEventStreams;
-(void)_destroyDuetHelpers;
-(void)_createDuetHelpersWithEventStreamTypes:(id)arg1 ;
-(NSMutableArray *)duetHelpers;
-(void)setDuetHelpers:(NSMutableArray *)arg1 ;
-(id)init;
@end

