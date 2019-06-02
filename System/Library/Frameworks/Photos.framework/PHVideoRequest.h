/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHImageManagerRequest.h>

@class PHVideoRequestOptions;

@interface PHVideoRequest : PHImageManagerRequest {

	PHVideoRequestOptions* _options;
	/*^block*/id _resultHandler;

}

@property (nonatomic,readonly) PHVideoRequestOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) id resultHandler;                        //@synthesize resultHandler=_resultHandler - In the implementation block
+(id)videoRequestWithAsset:(id)arg1 options:(id)arg2 domain:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)cloneIDAndResultHandlerFromRequest:(id)arg1 ;
-(void)clearResultHandler;
-(id)initVideoRequestWithAsset:(id)arg1 options:(id)arg2 domain:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(id)resultHandler;
-(id)description;
-(PHVideoRequestOptions *)options;
-(BOOL)isVideo;
@end

