/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSError.h>
@class NSNumber, NSString, NSDictionary, IKJSError;


@protocol IKJSError <JSExport>
@property (nonatomic,readonly) NSNumber * code; 
@property (nonatomic,readonly) NSString * domain; 
@property (nonatomic,readonly) NSString * description; 
@property (nonatomic,readonly) NSString * failureReason; 
@property (nonatomic,readonly) NSString * recoverySuggestion; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
@property (nonatomic,readonly) IKJSError * underlyingError; 
@required
-(NSString *)recoverySuggestion;
-(IKJSError *)underlyingError;
-(NSString *)failureReason;
-(NSDictionary *)userInfo;
-(NSString *)description;
-(NSString *)domain;
-(NSNumber *)code;

@end


@class NSNumber, NSString, NSDictionary, NSError;

@interface IKJSError : IKJSObject <IKJSError> {

	IKJSError* _jsUnderlyingError;
	NSError* _wrappedError;

}

@property (nonatomic,readonly) NSError * wrappedError;                     //@synthesize wrappedError=_wrappedError - In the implementation block
@property (nonatomic,readonly) NSNumber * code; 
@property (nonatomic,readonly) NSString * domain; 
@property (nonatomic,readonly) NSString * description; 
@property (nonatomic,readonly) NSString * failureReason; 
@property (nonatomic,readonly) NSString * recoverySuggestion; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
@property (nonatomic,readonly) IKJSError * underlyingError; 
-(id)initWithError:(id)arg1 appContext:(id)arg2 ;
-(NSError *)wrappedError;
-(NSString *)recoverySuggestion;
-(IKJSError *)underlyingError;
-(NSString *)failureReason;
-(NSDictionary *)userInfo;
-(NSString *)description;
-(NSString *)domain;
-(NSNumber *)code;
@end

