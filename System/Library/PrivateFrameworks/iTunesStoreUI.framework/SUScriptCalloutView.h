/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptCalloutView : SUScriptObject {

	BOOL _isVisible;
	NSString* _subtitle;
	NSString* _title;

}

@property (copy) NSString * subtitle; 
@property (copy) NSString * title; 
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(void)initialize;
-(id)attributeKeys;
-(void)_menuDidHideNotification:(id)arg1 ;
-(void)_reloadUntructedString;
-(void)_setupCalloutBar;
-(void)_resetCalloutBar;
-(void)setTargetX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4 ;
-(void)setTitle:(id)arg1 subtitle:(id)arg2 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)init;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

