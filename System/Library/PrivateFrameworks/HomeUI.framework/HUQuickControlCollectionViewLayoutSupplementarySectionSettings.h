/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NAIdentifiable.h>

@class NSString;

@interface HUQuickControlCollectionViewLayoutSupplementarySectionSettings : NSObject <NSCopying, NAIdentifiable> {

	double _preferredHeight;
	UIEdgeInsets _sectionInset;

}

@property (assign,nonatomic) double preferredHeight;                 //@synthesize preferredHeight=_preferredHeight - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionInset;              //@synthesize sectionInset=_sectionInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIEdgeInsets)sectionInset;
-(void)setSectionInset:(UIEdgeInsets)arg1 ;
-(double)preferredHeight;
-(void)setPreferredHeight:(double)arg1 ;
@end

