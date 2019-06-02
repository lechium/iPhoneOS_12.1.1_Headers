/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray, NSArray;

@interface _UIUpdateVisibleCellsContext : NSObject {

	NSMutableArray* _sizes;
	NSMutableArray* _indexPaths;

}

@property (nonatomic,readonly) NSArray * sizes;                   //@synthesize sizes=_sizes - In the implementation block
@property (nonatomic,readonly) NSArray * indexPaths;              //@synthesize indexPaths=_indexPaths - In the implementation block
-(id)init;
-(id)description;
-(NSArray *)sizes;
-(void)addSize:(CGSize)arg1 forIndexPath:(id)arg2 ;
-(BOOL)shouldInvalidate;
-(NSArray *)indexPaths;
@end
