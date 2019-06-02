/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BCSParsedDataPrivate.h>

@class NSString;

@interface BCSInvalidParsedData : NSObject <BCSParsedDataPrivate> {

	long long _invalidDataType;
	NSString* _invalidContents;
	NSString* _invalidURLScheme;

}

@property (nonatomic,readonly) long long invalidDataType;                     //@synthesize invalidDataType=_invalidDataType - In the implementation block
@property (nonatomic,copy) NSString * invalidContents;                        //@synthesize invalidContents=_invalidContents - In the implementation block
@property (nonatomic,copy) NSString * invalidURLScheme;                       //@synthesize invalidURLScheme=_invalidURLScheme - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,copy,readonly) NSString * extraPreviewText; 
+(BOOL)supportsSecureCoding;
-(NSString *)extraPreviewText;
-(long long)invalidDataType;
-(id)initWithInvalidDataType:(long long)arg1 invalidContents:(id)arg2 ;
-(void)setInvalidURLScheme:(NSString *)arg1 ;
-(void)setInvalidContents:(NSString *)arg1 ;
-(NSString *)invalidContents;
-(NSString *)invalidURLScheme;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
@end
