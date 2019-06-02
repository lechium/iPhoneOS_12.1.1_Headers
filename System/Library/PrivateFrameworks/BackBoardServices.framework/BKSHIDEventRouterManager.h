/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BKSHIDEventRouterManagerBase.h>

@interface BKSHIDEventRouterManager : BKSHIDEventRouterManagerBase {

	BOOL _needsFlush;

}

@property (assign,nonatomic) BOOL needsFlush;              //@synthesize needsFlush=_needsFlush - In the implementation block
+(id)sharedInstance;
-(void)_routerUpdated:(id)arg1 ;
-(void)setEventRouters:(id)arg1 ;
-(void)_flushTrigger;
-(BOOL)needsFlush;
-(void)setNeedsFlush:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_flush;
@end
