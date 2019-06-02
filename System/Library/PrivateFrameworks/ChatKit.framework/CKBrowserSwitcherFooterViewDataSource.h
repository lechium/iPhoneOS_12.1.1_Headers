/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKBrowserSwitcherFooterViewDataSource.h>

@protocol CKBrowserSwitcherFooterViewDataSource <NSObject>
@required
-(unsigned long long)numberOfPluginsInSwitcherView:(id)arg1 forSection:(unsigned long long)arg2;
-(id)switcherView:(id)arg1 modelAtIndexPath:(id)arg2 type:(long long*)arg3;
-(id)switcherView:(id)arg1 indexPathOfModelWithIdentifier:(id)arg2;

@end


@class NSString;

@interface CKBrowserSwitcherFooterViewDataSource : NSObject <CKBrowserSwitcherFooterViewDataSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)numberOfPluginsInSwitcherView:(id)arg1 forSection:(unsigned long long)arg2 ;
-(id)switcherView:(id)arg1 modelAtIndexPath:(id)arg2 type:(long long*)arg3 ;
-(id)switcherView:(id)arg1 indexPathOfModelWithIdentifier:(id)arg2 ;
-(id)pluginManager;
-(id)init;
@end

