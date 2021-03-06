/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface WKProcessAssertionBackgroundTaskManager : NSObject {

	unsigned _needsToRunInBackgroundCount;
	unsigned long long _backgroundTask;
	HashSet<WebKit::ProcessAssertionClient *, WTF::PtrHash<WebKit::ProcessAssertionClient *>, WTF::HashTraits<WebKit::ProcessAssertionClient *> >* _clients;

}
+(id)shared;
-(void)_notifyClientsOfImminentSuspension;
-(void)_updateBackgroundTask;
-(void)incrementNeedsToRunInBackgroundCount;
-(void)decrementNeedsToRunInBackgroundCount;
-(id)init;
-(void)dealloc;
-(void)addClient:(ProcessAssertionClient*)arg1 ;
-(void)removeClient:(ProcessAssertionClient*)arg1 ;
@end

