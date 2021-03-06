/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADGraphic.h>

@class OADShapeGeometry, OADOle, OADMovie;

@interface OADImage : OADGraphic {

	OADShapeGeometry* mGeometry;
	OADOle* mOle;
	OADMovie* mMovie;

}
-(id)imageProperties;
-(id)movie;
-(id)initWithBlipRef:(id)arg1 ;
-(id)ole;
-(void)setOle:(id)arg1 ;
-(void)setMovie:(id)arg1 ;
-(id)createImageFill;
-(void)createPictureFramePresetGeometry;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)geometry;
-(void)setGeometry:(id)arg1 ;
@end

