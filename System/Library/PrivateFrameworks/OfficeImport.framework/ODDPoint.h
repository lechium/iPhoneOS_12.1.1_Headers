/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ODDPointPropertySet, OADShapeProperties, OADTextBody;

@interface ODDPoint : NSObject {

	int mType;
	ODDPointPropertySet* mPropertySet;
	OADShapeProperties* mShapeProperties;
	OADTextBody* mText;

}
+(void)addConnectionToPoint:(id)arg1 order:(unsigned long long)arg2 array:(id*)arg3 ;
-(id)propertySet;
-(id)shapeProperties;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setText:(id)arg1 ;
-(id)text;
-(int)type;
-(void)setType:(int)arg1 ;
@end

