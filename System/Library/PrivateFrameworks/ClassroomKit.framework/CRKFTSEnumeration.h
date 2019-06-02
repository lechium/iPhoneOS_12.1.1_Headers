/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ClassroomKit/ClassroomKit-Structs.h>
@class NSString;

@interface CRKFTSEnumeration : NSObject {

	NSString* mDirectoryPath;
	int mOptions;

}
+(int)defaultOptions;
-(id)initWithDirectoryPath:(id)arg1 ;
-(id)entriesWithError:(id*)arg1 ;
-(id)initWithDirectoryPath:(id)arg1 options:(int)arg2 ;
-(SCD_Struct_CR1*)makeFTSWithError:(id*)arg1 ;
-(id)readAllEntriesFromFTS:(SCD_Struct_CR1*)arg1 error:(id*)arg2 ;
-(void)closeFTS:(SCD_Struct_CR1*)arg1 ;
-(id)readNextEntryFromFTS:(SCD_Struct_CR1*)arg1 error:(id*)arg2 ;
-(BOOL)shouldSkipEntry:(ftsent*)arg1 ;
-(id)init;
@end

