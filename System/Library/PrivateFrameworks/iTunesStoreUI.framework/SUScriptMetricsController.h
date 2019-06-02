/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>
#import <libobjc.A.dylib/ISURLBagObserver.h>

@class SSMetricsController, NSString;

@interface SUScriptMetricsController : SUScriptObject <ISURLBagObserver> {

	SSMetricsController* _metricsController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(void)initialize;
-(id)attributeKeys;
-(void)bagDidChange:(id)arg1 ;
-(void)_configureWithBagDictionary:(id)arg1 ;
-(void)flushUnreportedEventsWithCompletionFunction:(id)arg1 ;
-(void)recordEventWithTopic:(id)arg1 properties:(id)arg2 completionFunction:(id)arg3 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)init;
-(void)dealloc;
@end
