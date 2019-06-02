/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>
#import <libobjc.A.dylib/SUScriptNavigationItem.h>

@class SUScriptFunction, NSString, WebScriptObject, NSNumber;

@interface SUScriptTextField : SUScriptObject <SUScriptNavigationItem> {

	SUScriptFunction* _shouldFocusFunction;
	NSString* _style;

}

@property (nonatomic,readonly) BOOL canBecomeFirstResponder; 
@property (retain) NSString * autocapitalizationType; 
@property (retain) NSString * autocorrectionType; 
@property (retain) NSString * keyboardType; 
@property (retain) NSString * placeholder; 
@property (retain) WebScriptObject * shouldFocusFunction; 
@property (readonly) NSString * style; 
@property (retain) NSString * value; 
@property (retain) NSNumber * width; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(void)initialize;
-(id)attributeKeys;
-(id)buttonItem;
-(id)initWithTextFieldStyle:(id)arg1 ;
-(BOOL)_styleIsValid:(id)arg1 ;
-(id)_boxedNativeTextField;
-(id)_autocapitalizationType;
-(id)_autocorrectionType;
-(id)_keyboardType;
-(id)_copyPlaceholder;
-(id)_copyValue;
-(id)_newTextField;
-(void)setNativeObjectWithBarButtonItem:(id)arg1 ;
-(void)setNativeObjectWithSearchBar:(id)arg1 ;
-(void)setNativeObjectWithTextField:(id)arg1 ;
-(void)setShouldFocusFunction:(WebScriptObject *)arg1 ;
-(WebScriptObject *)shouldFocusFunction;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)init;
-(void)dealloc;
-(NSString *)style;
-(void)setPlaceholder:(NSString *)arg1 ;
-(void)setAutocorrectionType:(NSString *)arg1 ;
-(void)setAutocapitalizationType:(NSString *)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSNumber *)width;
-(void)setWidth:(NSNumber *)arg1 ;
-(void)setKeyboardType:(NSString *)arg1 ;
-(NSString *)placeholder;
-(NSString *)keyboardType;
-(NSString *)autocorrectionType;
-(NSString *)autocapitalizationType;
-(double)_defaultWidth;
-(BOOL)blur;
-(BOOL)focus;
@end
