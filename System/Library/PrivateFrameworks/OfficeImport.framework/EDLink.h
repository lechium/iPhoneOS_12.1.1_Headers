/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDCollection;

@interface EDLink : NSObject {

	int mType;
	EDCollection* mExternalNames;

}
+(id)linkWithType:(int)arg1 ;
-(id)externalNames;
-(void)dealloc;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)initWithType:(int)arg1 ;
@end

