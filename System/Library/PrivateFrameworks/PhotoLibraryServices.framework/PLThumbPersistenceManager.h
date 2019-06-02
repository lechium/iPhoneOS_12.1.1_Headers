/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol PLThumbPersistenceManager <NSObject>
@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,readonly) BOOL isReadOnly; 
@optional
-(void)deleteEntryWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 uuid:(id)arg3;
-(id)thumbnailPathForThumbIdentifier:(id)arg1;

@required
-(id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 dataOffset:(int*)arg8;
-(void)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 photoUUID:(id)arg4 options:(id)arg5;
-(BOOL)validateData:(id)arg1 withToken:(id)arg2;
-(CGImageRef)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 decodeSession:(void*)arg3;
-(id)beginThumbnailSafePropertyUpdatesOnAsset:(id)arg1;
-(void)endThumbnailSafePropertyUpdatesOnAsset:(id)arg1 withToken:(id)arg2;
-(BOOL)usesThumbIdentifiers;
-(id)_debugDescription;
-(BOOL)isReadOnly;
-(NSString *)path;

@end
