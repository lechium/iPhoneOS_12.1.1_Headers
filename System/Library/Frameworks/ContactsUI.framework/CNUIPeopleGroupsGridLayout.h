/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@interface CNUIPeopleGroupsGridLayout : UICollectionViewFlowLayout {

	CGSize _intrinsicContentSize;

}

@property (assign,nonatomic) CGSize intrinsicContentSize;              //@synthesize intrinsicContentSize=_intrinsicContentSize - In the implementation block
+(unsigned long long)maximumNumberOfRowsForTraitCollection:(id)arg1 ;
+(unsigned long long)groupCountPerRowForTraitCollection:(id)arg1 ;
+(CGSize)itemSizeForTraitCollection:(id)arg1 contentSizeCategory:(id)arg2 ;
+(unsigned long long)maximumNumberOfGroupsForTraitCollection:(id)arg1 ;
+(id)layoutForTraitCollection:(id)arg1 contentSizeCategory:(id)arg2 numberOfGroups:(unsigned long long)arg3 ;
+(double)verticalMargin;
-(void)setIntrinsicContentSize:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
@end
