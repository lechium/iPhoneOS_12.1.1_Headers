/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFImageIconDescriptor.h>

@class NSDictionary;

@interface HFMultistateImageIconDescriptor : HFImageIconDescriptor {

	NSDictionary* _imageIdentifiersKeyedByPrimaryState;

}

@property (nonatomic,retain) NSDictionary * imageIdentifiersKeyedByPrimaryState;              //@synthesize imageIdentifiersKeyedByPrimaryState=_imageIdentifiersKeyedByPrimaryState - In the implementation block
-(id)initWithImageIdentifiersKeyedByPrimaryState:(id)arg1 defaultImageIdentifier:(id)arg2 ;
-(NSDictionary *)imageIdentifiersKeyedByPrimaryState;
-(id)initWithImageIdentifiersKeyedByPrimaryState:(id)arg1 ;
-(id)imageIdentifierForPrimaryState:(long long)arg1 ;
-(void)setImageIdentifiersKeyedByPrimaryState:(NSDictionary *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end
