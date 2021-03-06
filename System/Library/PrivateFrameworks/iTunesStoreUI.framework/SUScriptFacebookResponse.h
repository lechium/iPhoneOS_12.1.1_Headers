/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUScriptError;

@interface SUScriptFacebookResponse : SUScriptObject {

	NSString* _bodyData;
	SUScriptError* _error;
	long long _statusCode;

}

@property (readonly) NSString * bodyData; 
@property (readonly) SUScriptError * error; 
@property (readonly) long long HTTPStatusCode; 
+(id)webScriptNameForKeyName:(id)arg1 ;
+(void)initialize;
-(long long)HTTPStatusCode;
-(NSString *)bodyData;
-(id)attributeKeys;
-(id)initWithData:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)dealloc;
-(SUScriptError *)error;
@end

