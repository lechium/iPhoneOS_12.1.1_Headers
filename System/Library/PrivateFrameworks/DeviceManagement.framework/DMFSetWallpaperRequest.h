/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSURL, NSData, NSFileHandle;

@interface DMFSetWallpaperRequest : DMFTaskRequest {

	NSURL* _imageURL;
	NSData* _imageData;
	long long _location;
	NSFileHandle* _fileHandle;

}

@property (nonatomic,retain) NSFileHandle * fileHandle;              //@synthesize fileHandle=_fileHandle - In the implementation block
@property (nonatomic,copy) NSURL * imageURL;                         //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy) NSData * imageData;                       //@synthesize imageData=_imageData - In the implementation block
@property (assign,nonatomic) long long location;                     //@synthesize location=_location - In the implementation block
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
-(NSURL *)imageURL;
-(NSData *)imageData;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSFileHandle *)fileHandle;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)location;
-(void)setLocation:(long long)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
@end

