/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ADLayoutOptions : NSObject <NSCopying> {

	CGSize _containerSize;
	CGSize _reorientedContainerSize;

}

@property (assign,nonatomic) CGSize containerSize;                        //@synthesize containerSize=_containerSize - In the implementation block
@property (assign,nonatomic) CGSize reorientedContainerSize;              //@synthesize reorientedContainerSize=_reorientedContainerSize - In the implementation block
-(CGSize)reorientedContainerSize;
-(void)setReorientedContainerSize:(CGSize)arg1 ;
-(CGSize)containerSize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContainerSize:(CGSize)arg1 ;
@end
