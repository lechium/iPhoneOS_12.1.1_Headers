/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>
#import <libobjc.A.dylib/SUActivityItemProviderDelegate.h>

@class SUScriptFunction, NSString, SUActivityItemProvider, WebScriptObject;

@interface SUScriptActivityItemProvider : SUScriptObject <SUActivityItemProviderDelegate> {

	id _item;
	/*^block*/id _itemBlock;
	SUScriptFunction* _itemFunction;
	int _loadState;
	NSString* _mimeType;
	SUActivityItemProvider* _nativeProvider;
	int _previewLoadState;

}

@property (readonly) SUActivityItemProvider * nativeActivityItemProvider; 
@property (readonly) NSString * activityType; 
@property (retain) WebScriptObject * itemFunction; 
@property (readonly) NSString * MIMEType; 
@property (assign) double progress; 
@property (copy) NSString * status; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(void)initialize;
-(id)attributeKeys;
-(SUActivityItemProvider *)nativeActivityItemProvider;
-(id)_newPlaceholderWithMIMEType:(id)arg1 ;
-(void)_finishItemWithItem:(id)arg1 ;
-(void)_finishPreviewWithImage:(id)arg1 ;
-(id)activitySupportsMIMEType:(id)arg1 ;
-(void)setPreviewImageWithURLString:(id)arg1 ;
-(void)activityItemProvider:(id)arg1 provideItemUsingBlock:(/*^block*/id)arg2 ;
-(id)initWithMIMEType:(id)arg1 ;
-(WebScriptObject *)itemFunction;
-(void)setItemFunction:(WebScriptObject *)arg1 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)dealloc;
-(void)setItem:(id)arg1 ;
-(void)setProgress:(double)arg1 ;
-(double)progress;
-(NSString *)activityType;
-(NSString *)status;
-(void)setStatus:(NSString *)arg1 ;
-(NSString *)MIMEType;
@end

