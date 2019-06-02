/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADDrawable.h>

@class ODDNodePoint, ODDColorTransform, ODDStyleDefinition;

@interface ODDDiagram : OADDrawable {

	ODDNodePoint* mDocumentPoint;
	ODDColorTransform* mColorTransform;
	ODDStyleDefinition* mStyleDefinition;

}
-(id)documentPoint;
-(id)styleDefinition;
-(id)colorTransform;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)setDocumentPoint:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
@end

