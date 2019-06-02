/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVObservationController, NSMutableOrderedSet;

@interface AVSecondScreenController : NSObject {

	BOOL _allowsUpdatingActiveConnection;
	BOOL _hasApplicationBecomeActiveAtLeastOnce;
	AVObservationController* _observationController;
	NSMutableOrderedSet* _secondScreens;
	NSMutableOrderedSet* _connections;

}

@property (nonatomic,readonly) AVObservationController * observationController;              //@synthesize observationController=_observationController - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * secondScreens;                          //@synthesize secondScreens=_secondScreens - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * connections;                            //@synthesize connections=_connections - In the implementation block
@property (assign,nonatomic) BOOL allowsUpdatingActiveConnection;                            //@synthesize allowsUpdatingActiveConnection=_allowsUpdatingActiveConnection - In the implementation block
@property (assign,nonatomic) BOOL hasApplicationBecomeActiveAtLeastOnce;                     //@synthesize hasApplicationBecomeActiveAtLeastOnce=_hasApplicationBecomeActiveAtLeastOnce - In the implementation block
+(void)handleApplicationDidBecomeActiveNotification;
+(void)load;
+(id)sharedInstance;
-(NSMutableOrderedSet *)connections;
-(id)addConnectionForPlayer:(id)arg1 playerLayer:(id)arg2 ;
-(id)connectionPassingTest:(/*^block*/id)arg1 ;
-(id)preferredConnection;
-(void)setPreferredConnection:(id)arg1 ;
-(void)addSecondScreen:(id)arg1 ;
-(void)removeSecondScreen:(id)arg1 ;
-(id)_connectionForPlayer:(id)arg1 ;
-(id)_targetScreen;
-(void)_updateActiveConnection;
-(void)_insertConnection:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(AVObservationController *)observationController;
-(NSMutableOrderedSet *)secondScreens;
-(BOOL)allowsUpdatingActiveConnection;
-(void)setAllowsUpdatingActiveConnection:(BOOL)arg1 ;
-(BOOL)hasApplicationBecomeActiveAtLeastOnce;
-(void)setHasApplicationBecomeActiveAtLeastOnce:(BOOL)arg1 ;
-(void)removeConnection:(id)arg1 ;
-(void)addConnection:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)activeConnection;
@end

