/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AutoLoop/AutoLoop-Structs.h>
@interface ICHomographyWrapper : NSObject {

	HomographyRecordVector* homographies;

}

@property (readonly) HomographyRecordVector* homographies; 
+(id)homographyWrapperWithHomographyRecordVector:(HomographyRecordVector*)arg1 ;
-(id)initWithHomographyRecordVector:(HomographyRecordVector*)arg1 ;
-(HomographyRecordVector*)homographies;
-(void)dealloc;
@end

