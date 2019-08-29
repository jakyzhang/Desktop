//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCBaseFilter.h"

@class MCMeshSingleItem, NSMutableArray;
@protocol TTRealTimeFaceEditProtocol;

@interface MCMeshFilterV2 : MCBaseFilter
{
    unsigned int uniformInfo;
    unsigned int uniformScreenRatio;
    unsigned int uniformFaceRatio;
    unsigned int uniformRoll;
    unsigned int uniformYaw;
    unsigned int uniformPitch;
    float anotherStrength;
    NSMutableArray *peopleList;
    NSMutableArray *fffList;
    float meshV2Vertices[13302];
    float meshV2TextureCoordinates[13302];
    float meshInformation[210];
    unsigned long long _meshGlobalOpt;
    NSMutableArray *_meshGlobalItems;
    MCMeshSingleItem *_singleItem;
    NSMutableArray *_currentProcessedMeshItems;
    NSMutableArray *_currentProcessedFaceItems;
    unsigned long long _boundaryFixMode;
    double _boundaryFixStrength;
    id <TTRealTimeFaceEditProtocol> _faceEditDelegate;
    struct CGRect _faceRect;
}

+ (long long)chooseBestDataIndex:(id)arg1;
+ (void)updatePeopleList:(id)arg1 withFaceInfo:(id)arg2;
+ (struct CGPoint)pointToVertexHW:(struct CGPoint)arg1 imageSize:(struct CGSize)arg2;
+ (double)distanceOfPoint:(struct CGPoint)arg1 andPoint:(struct CGPoint)arg2;
+ (void)convertFeaturePoints:(float [95][2])arg1 faceDetectImageSize:(struct CGSize)arg2 toPoints:(float [95][2])arg3 yaw:(double)arg4 pitch:(double)arg5 withSingleItem:(id)arg6;
+ (void)generateCountList:(id)arg1 withFaceInfo:(id)arg2 toFaceList:(id)arg3 countList:(id)arg4;
@property(nonatomic) struct CGRect faceRect; // @synthesize faceRect=_faceRect;
@property(nonatomic) __weak id <TTRealTimeFaceEditProtocol> faceEditDelegate; // @synthesize faceEditDelegate=_faceEditDelegate;
@property(nonatomic) double boundaryFixStrength; // @synthesize boundaryFixStrength=_boundaryFixStrength;
@property(nonatomic) unsigned long long boundaryFixMode; // @synthesize boundaryFixMode=_boundaryFixMode;
@property(retain, nonatomic) NSMutableArray *currentProcessedFaceItems; // @synthesize currentProcessedFaceItems=_currentProcessedFaceItems;
@property(retain, nonatomic) NSMutableArray *currentProcessedMeshItems; // @synthesize currentProcessedMeshItems=_currentProcessedMeshItems;
@property(nonatomic) MCMeshSingleItem *singleItem; // @synthesize singleItem=_singleItem;
@property(retain, nonatomic) NSMutableArray *meshGlobalItems; // @synthesize meshGlobalItems=_meshGlobalItems;
@property(nonatomic) unsigned long long meshGlobalOpt; // @synthesize meshGlobalOpt=_meshGlobalOpt;
- (void).cxx_destruct;
- (id)getFaceInfo;
- (void)setupEnviroment;
- (void)convertFeaturePoints:(float [95][2])arg1 faceDetectImageSize:(struct CGSize)arg2 toPoints:(float [95][2])arg3 yaw:(double)arg4 pitch:(double)arg5;
- (double)boundaryFixStrengthFactorWithDistortion:(struct MeshDistortionType)arg1 feature:(id)arg2;
- (int)doReceiveData:(id)arg1 withTarget:(id)arg2;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (id)mergeMeshItems:(id)arg1;
- (id)globalMeshItemsArray;
- (id)initWithVertexShaderFromFile:(id)arg1 fragmentShaderFromFile:(id)arg2;

@end

