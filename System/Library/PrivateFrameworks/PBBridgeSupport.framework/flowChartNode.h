/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableSet, NSMutableString, NSMutableArray;

@interface flowChartNode : NSObject {

	int _clickOrder;
	NSString* _className;
	NSString* _documentationDescription;
	NSMutableSet* _edgesIn;
	NSMutableSet* _edgesOut;
	NSString* _screenshotLocation;
	NSMutableString* _graphNodeString;
	NSString* _viewName;
	NSString* _graphStructString;
	flowChartNode* _parentNode;
	NSMutableArray* _subNodes;
	double _expectedNumberOfClicks;

}

@property (retain) NSString * className;                             //@synthesize className=_className - In the implementation block
@property (retain) NSString * documentationDescription;              //@synthesize documentationDescription=_documentationDescription - In the implementation block
@property (retain) NSMutableSet * edgesIn;                           //@synthesize edgesIn=_edgesIn - In the implementation block
@property (retain) NSMutableSet * edgesOut;                          //@synthesize edgesOut=_edgesOut - In the implementation block
@property (retain) NSString * screenshotLocation;                    //@synthesize screenshotLocation=_screenshotLocation - In the implementation block
@property (retain) NSMutableString * graphNodeString;                //@synthesize graphNodeString=_graphNodeString - In the implementation block
@property (retain) NSString * viewName;                              //@synthesize viewName=_viewName - In the implementation block
@property (retain) NSString * graphStructString;                     //@synthesize graphStructString=_graphStructString - In the implementation block
@property (retain) flowChartNode * parentNode;                       //@synthesize parentNode=_parentNode - In the implementation block
@property (retain) NSMutableArray * subNodes;                        //@synthesize subNodes=_subNodes - In the implementation block
@property (assign) double expectedNumberOfClicks;                    //@synthesize expectedNumberOfClicks=_expectedNumberOfClicks - In the implementation block
@property (assign) int clickOrder;                                   //@synthesize clickOrder=_clickOrder - In the implementation block
-(void)setParentNode:(flowChartNode *)arg1 ;
-(void)setClassName:(NSString *)arg1 ;
-(NSString *)documentationDescription;
-(NSMutableArray *)subNodes;
-(id)initWithClassName:(id)arg1 andParentNode:(id)arg2 andViewName:(id)arg3 andDocumentationDescription:(id)arg4 ;
-(void)setViewName:(NSString *)arg1 ;
-(NSMutableSet *)edgesOut;
-(NSMutableSet *)edgesIn;
-(double)expectedNumberOfClicks;
-(void)setExpectedNumberOfClicks:(double)arg1 ;
-(void)updateGraphNodeString;
-(NSMutableString *)graphNodeString;
-(NSString *)graphStructString;
-(void)setClickOrder:(int)arg1 ;
-(void)setGraphStructString:(NSString *)arg1 ;
-(NSString *)screenshotLocation;
-(void)setDocumentationDescription:(NSString *)arg1 ;
-(void)setEdgesIn:(NSMutableSet *)arg1 ;
-(void)setEdgesOut:(NSMutableSet *)arg1 ;
-(void)setScreenshotLocation:(NSString *)arg1 ;
-(void)setGraphNodeString:(NSMutableString *)arg1 ;
-(void)setSubNodes:(NSMutableArray *)arg1 ;
-(int)clickOrder;
-(NSString *)viewName;
-(id)init;
-(id)description;
-(flowChartNode *)parentNode;
-(NSString *)className;
@end

