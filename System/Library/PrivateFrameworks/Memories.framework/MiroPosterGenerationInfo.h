/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MiroPosterGenerationInfo : NSObject <NSCopying> {

	BOOL _sourceImageWasCloudThumb;
	BOOL _analysisDataWasAvailable;

}

@property (assign) BOOL sourceImageWasCloudThumb;              //@synthesize sourceImageWasCloudThumb=_sourceImageWasCloudThumb - In the implementation block
@property (assign) BOOL analysisDataWasAvailable;              //@synthesize analysisDataWasAvailable=_analysisDataWasAvailable - In the implementation block
-(BOOL)sourceImageWasCloudThumb;
-(BOOL)analysisDataWasAvailable;
-(void)setSourceImageWasCloudThumb:(BOOL)arg1 ;
-(id)storageKeyHint;
-(BOOL)isActualPoster;
-(void)setAnalysisDataWasAvailable:(BOOL)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

