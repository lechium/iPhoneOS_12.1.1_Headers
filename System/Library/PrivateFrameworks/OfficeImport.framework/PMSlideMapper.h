/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>

@class PDSlide;

@interface PMSlideMapper : CMMapper {

	PDSlide* mSlide;
	CGRect mRect;

}
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)styleMatrix;
-(void)mapDrawablesAt:(id)arg1 withState:(id)arg2 ;
-(CGRect)slideRect;
-(id)defaultTheme;
-(id)initWithPDSlide:(id)arg1 slideRect:(CGRect)arg2 parent:(id)arg3 ;
-(void)mapMasterSlideAt:(id)arg1 withState:(id)arg2 ;
-(id)slideName;
-(void)mapBackgroundAt:(id)arg1 recursive:(BOOL)arg2 withState:(id)arg3 ;
@end

