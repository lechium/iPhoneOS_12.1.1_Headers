/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NewsCore/NewsCore-Structs.h>
@class NSURL;

@interface FCCoverArtImage : NSObject {

	NSURL* _URL;
	CGSize _dimensions;

}

@property (nonatomic,readonly) CGSize dimensions;              //@synthesize dimensions=_dimensions - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                    //@synthesize URL=_URL - In the implementation block
-(id)initWithDimensions:(CGSize)arg1 URL:(id)arg2 ;
-(NSURL *)URL;
-(CGSize)dimensions;
@end

