/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/TCDumpType.h>

@class NSString, NSMutableArray;

@interface TCDumpStruct : TCDumpType {

	long long mSize;
	NSString* mSizeFieldName;
	long long mSizeCorrection;
	NSMutableArray* mMembers;

}
-(void)fromBinary:(_sFILE*)arg1 toXml:(xmlNode*)arg2 state:(id)arg3 ;
-(id)initWithSize:(long long)arg1 sizeFieldName:(id)arg2 sizeCorrection:(int)arg3 members:(id)arg4 ;
-(id)initWithMembers:(id)arg1 ;
-(id)initWithSize:(long long)arg1 members:(id)arg2 ;
-(id)initWithSizeFieldName:(id)arg1 members:(id)arg2 ;
-(id)initWithSizeFieldName:(id)arg1 sizeCorrection:(int)arg2 members:(id)arg3 ;
-(void)dealloc;
@end

