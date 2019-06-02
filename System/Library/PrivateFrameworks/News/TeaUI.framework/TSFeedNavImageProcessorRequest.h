/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/News/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TeaUI/TeaUI-Structs.h>
#import <libobjc.A.dylib/TSProcessedImageRequestType.h>

@class NSDictionary, NSString;

@interface TSFeedNavImageProcessorRequest : NSObject <TSProcessedImageRequestType> {

	 assetHandles;
	 feedNavImageSize;
	 scale;
	 cornerRadius;

}

@property (copy,nonatomic) NSDictionary * assetHandles; 
@property (readonly,nonatomic) NSString * cacheIdentifier; 
-(NSString *)cacheIdentifier;
-(NSDictionary *)assetHandles;
-(void)setAssetHandles:(NSDictionary *)arg1 ;
-(id)initWithFeedNavImageAssetHandle:(id)arg1 feedNavImageSize:(CGSize)arg2 feedNavImageStyler:(id)arg3 scale:(double)arg4 ;
-(id)init;
@end

