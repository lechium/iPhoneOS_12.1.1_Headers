/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NSString;

@interface MessageAttachmentSingleStatus : NSObject {

	NSError* _transferError;
	NSString* _additionalErrorInfo;
	NSString* _errorURLString;
	long long _errorFileSize;

}

@property (retain) NSError * transferError;                     //@synthesize transferError=_transferError - In the implementation block
@property (retain) NSString * additionalErrorInfo;              //@synthesize additionalErrorInfo=_additionalErrorInfo - In the implementation block
@property (retain) NSString * errorURLString;                   //@synthesize errorURLString=_errorURLString - In the implementation block
@property (assign) long long errorFileSize;                     //@synthesize errorFileSize=_errorFileSize - In the implementation block
-(NSError *)transferError;
-(void)setTransferError:(NSError *)arg1 ;
-(NSString *)additionalErrorInfo;
-(void)setAdditionalErrorInfo:(NSString *)arg1 ;
-(NSString *)errorURLString;
-(void)setErrorURLString:(NSString *)arg1 ;
-(long long)errorFileSize;
-(void)setErrorFileSize:(long long)arg1 ;
-(void)dealloc;
@end
