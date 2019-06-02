/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPOperation.h>

@class CSSearchableIndex, NSString;

@interface FPXFetchClientStateOperation : FPOperation {

	CSSearchableIndex* _index;
	NSString* _indexName;

}
+(id)_currentIndexerVersion;
-(id)initWithIndex:(id)arg1 indexName:(id)arg2 ;
-(void)_handleFetchedClientState:(id)arg1 error:(id)arg2 ;
-(BOOL)_clientStateResetNeeded;
-(void)_markClientStateResetDone;
-(void)_fetchClientState;
-(void)main;
@end

