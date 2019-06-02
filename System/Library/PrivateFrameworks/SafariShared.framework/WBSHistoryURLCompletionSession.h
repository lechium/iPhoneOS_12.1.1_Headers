/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSURLCompletionSessionProtocol.h>

@class WBSHistoryService;

@interface WBSHistoryURLCompletionSession : NSObject <WBSURLCompletionSessionProtocol> {

	WBSHistoryService* _historyService;

}
-(id)initWithHistoryService:(id)arg1 ;
-(void)getBestMatchesForTypedString:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
