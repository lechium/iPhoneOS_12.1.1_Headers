/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Memories/Memories-Structs.h>
@class KonaClip;

@interface TransitionInput : NSObject {

	int _ID;
	KonaClip* _clip;
	CGSize _naturalSize;
	CGAffineTransform _transform;

}

@property (assign,nonatomic) int ID;                                   //@synthesize ID=_ID - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) CGSize naturalSize;                       //@synthesize naturalSize=_naturalSize - In the implementation block
@property (assign,nonatomic) KonaClip * clip;                          //@synthesize clip=_clip - In the implementation block
-(CGSize)naturalSize;
-(int)ID;
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)setClip:(KonaClip *)arg1 ;
-(void)setID:(int)arg1 ;
-(id)description;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(KonaClip *)clip;
@end

