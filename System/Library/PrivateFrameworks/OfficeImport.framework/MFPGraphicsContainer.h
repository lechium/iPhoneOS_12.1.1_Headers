/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class MFPGraphicsState;

@interface MFPGraphicsContainer : NSObject {

	MFPGraphicsState* mParentGraphicsState;
	CGAffineTransform mContainerTransform;

}
-(id)initWithParentGraphicsState:(id)arg1 containerTransform:(CGAffineTransform)arg2 ;
-(id)parentGraphicsState;
-(CGAffineTransform)containerTransform;
-(void)dealloc;
@end
