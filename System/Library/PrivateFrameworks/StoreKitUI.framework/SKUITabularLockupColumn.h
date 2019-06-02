/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSMutableArray, NSArray;

@interface SKUITabularLockupColumn : NSObject {

	NSMutableArray* _childViewElements;
	long long _identifier;
	CGSize _size;

}

@property (assign,nonatomic) long long identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) CGSize size;                                     //@synthesize size=_size - In the implementation block
@property (nonatomic,copy,readonly) NSArray * childViewElements;              //@synthesize childViewElements=_childViewElements - In the implementation block
-(NSArray *)childViewElements;
-(void)_addChildViewElement:(id)arg1 ;
-(id)initWithColumnIdentifier:(long long)arg1 ;
-(CGSize)size;
-(long long)identifier;
-(id)description;
-(void)setIdentifier:(long long)arg1 ;
-(void)setSize:(CGSize)arg1 ;
@end

