/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptMenuItem : SUScriptObject {

	BOOL _enabled;
	NSString* _title;
	id _userInfo;

}

@property (assign) BOOL enabled; 
@property (retain) NSString * title; 
@property (retain) id userInfo; 
+(id)webScriptNameForKeyName:(id)arg1 ;
+(void)initialize;
-(id)attributeKeys;
-(void)_sendDidChange;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)init;
-(void)dealloc;
-(id)userInfo;
-(void)setUserInfo:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(BOOL)enabled;
@end

