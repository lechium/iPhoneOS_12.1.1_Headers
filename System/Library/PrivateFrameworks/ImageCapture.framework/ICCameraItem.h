/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@class NSData, NSString, ICCameraDevice, ICCameraFolder, NSDate, NSDictionary, NSMutableDictionary;

@interface ICCameraItem : NSObject {

	void* _itemProperties;
	NSData* _thumbnailData;
	id _userObject;
	NSString* _relativeFileSystemPath;

}

@property (readonly) BOOL hasThumbnail; 
@property (readonly) BOOL hasMetadata; 
@property (readonly) NSString * fileSystemPath; 
@property (getter=isLocked) BOOL locked; 
@property (copy) id completionBlock; 
@property (readonly) NSData * thumbnailData;                         //@synthesize thumbnailData=_thumbnailData - In the implementation block
@property (retain) id userObject;                                    //@synthesize userObject=_userObject - In the implementation block
@property (readonly) NSString * relativeFileSystemPath;              //@synthesize relativeFileSystemPath=_relativeFileSystemPath - In the implementation block
@property (readonly) unsigned long long parentID; 
@property (readonly) unsigned long long ownerID; 
@property (readonly) unsigned long long twinID; 
@property (readonly) unsigned long long objectID; 
@property (readonly) ICCameraDevice * device; 
@property (readonly) ICCameraFolder * parentFolder; 
@property (readonly) NSString * name; 
@property (readonly) NSString * UTI; 
@property (readonly) NSDate * creationDate; 
@property (readonly) NSDate * modificationDate; 
@property (readonly) CGImageRef thumbnail; 
@property (readonly) NSDictionary * metadata; 
@property (readonly) NSMutableDictionary * userData; 
-(NSData *)thumbnailData;
-(ICCameraFolder *)parentFolder;
-(BOOL)hasThumbnail;
-(void)flushThumbnailCache;
-(void)flushMetadataCache;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 ;
-(void)setPtpObjectHandle:(unsigned)arg1 ;
-(NSString *)fileSystemPath;
-(void)setTwinID:(unsigned long long)arg1 ;
-(long long)compareObjectID:(id)arg1 ;
-(unsigned long long)twinID;
-(void)setParentFolder:(ICCameraFolder *)arg1 ;
-(void)setOwnerID:(unsigned long long)arg1 ;
-(void)requestThumbnail;
-(void)requestMetadata;
-(unsigned)ptpObjectHandle;
-(void)appendToPath:(id)arg1 ;
-(NSString *)relativeFileSystemPath;
-(void)setObjectID:(unsigned long long)arg1 ;
-(unsigned long long)objectID;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(id)userObject;
-(unsigned long long)parentID;
-(void)setParentID:(unsigned long long)arg1 ;
-(void)setUserObject:(id)arg1 ;
-(ICCameraDevice *)device;
-(unsigned long long)ownerID;
-(void)dealloc;
-(NSString *)name;
-(id)description;
-(id)valueForUndefinedKey:(id)arg1 ;
-(unsigned long long)unsignedIntegerValue;
-(BOOL)isLocked;
-(void)setLocked:(BOOL)arg1 ;
-(void)setCompletionBlock:(id)arg1 ;
-(NSString *)UTI;
-(void)setUTI:(NSString *)arg1 ;
-(NSDictionary *)metadata;
-(NSMutableDictionary *)userData;
-(BOOL)hasMetadata;
-(id)completionBlock;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSDate *)modificationDate;
-(CGImageRef)thumbnail;
@end

