/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CRKChunkedFile : NSObject {

	int mFileDescriptor;

}
+(long long)preferredChunkSizeForFileDescriptor:(int)arg1 ;
+(void)assertFileDescriptorIsValid:(int)arg1 ;
-(long long)readNextChunkIntoBuffer:(id)arg1 error:(id*)arg2 ;
-(id)initWithFileDescriptor:(int)arg1 ;
-(id)init;
@end
