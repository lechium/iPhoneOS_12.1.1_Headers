/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@class NSSet;

@interface HFStaticItemProvider : HFItemProvider {

	BOOL _hasProvidedItems;
	NSSet* _staticItems;

}

@property (nonatomic,retain) NSSet * staticItems;                //@synthesize staticItems=_staticItems - In the implementation block
@property (assign,nonatomic) BOOL hasProvidedItems;              //@synthesize hasProvidedItems=_hasProvidedItems - In the implementation block
-(void)setStaticItems:(NSSet *)arg1 ;
-(BOOL)hasProvidedItems;
-(NSSet *)staticItems;
-(void)setHasProvidedItems:(BOOL)arg1 ;
-(id)initWithHome:(id)arg1 items:(id)arg2 ;
-(id)reloadItems;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(id)items;
@end

