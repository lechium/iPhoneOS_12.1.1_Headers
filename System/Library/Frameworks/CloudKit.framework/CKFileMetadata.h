/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface CKFileMetadata : NSObject <NSSecureCoding> {

	NSNumber* _deviceID;
	NSNumber* _fileID;
	NSNumber* _generationID;
	NSNumber* _modTimeInSeconds;
	NSNumber* _fileSize;

}

@property (nonatomic,retain) NSNumber * deviceID;                      //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSNumber * fileID;                        //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,retain) NSNumber * generationID;                  //@synthesize generationID=_generationID - In the implementation block
@property (nonatomic,retain) NSNumber * modTimeInSeconds;              //@synthesize modTimeInSeconds=_modTimeInSeconds - In the implementation block
@property (nonatomic,retain) NSNumber * fileSize;                      //@synthesize fileSize=_fileSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setFileID:(NSNumber *)arg1 ;
-(NSNumber *)fileID;
-(NSNumber *)deviceID;
-(void)setDeviceID:(NSNumber *)arg1 ;
-(NSNumber *)generationID;
-(void)setGenerationID:(NSNumber *)arg1 ;
-(NSNumber *)modTimeInSeconds;
-(void)setModTimeInSeconds:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFileSize:(NSNumber *)arg1 ;
-(NSNumber *)fileSize;
@end

