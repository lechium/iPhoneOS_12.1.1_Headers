/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFObject.h>

@class NSMutableArray;

@interface MFPalette : NSObject <MFObject> {

	NSMutableArray* m_colours;

}
+(id)paletteWithColours:(id)arg1 ;
-(int)selectInto:(id)arg1 ;
-(id)getColour:(int)arg1 ;
-(BOOL)setEntries:(int)arg1 in_colours:(id)arg2 ;
-(BOOL)resize:(int)arg1 ;
-(id)initWithColours:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

