/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPRequest.h>

@class MPModelRequest;

@interface MPModelShimRequest : MPRequest {

	MPModelRequest* _modelRequest;

}

@property (nonatomic,retain) MPModelRequest * modelRequest;              //@synthesize modelRequest=_modelRequest - In the implementation block
+(Class)responseClass;
-(id)middlewareClasses;
-(MPModelRequest *)modelRequest;
-(void)setModelRequest:(MPModelRequest *)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

