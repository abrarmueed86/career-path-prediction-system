typedef struct {
    char name[50];
    float weights[6];       // same order as SkillProfile
    float minRequired[6];   // for gap analysis
} CareerPath;

typedef struct {
    int studentID;
    char timestamp[30];
    char topCareer[50];
    float compatibilityScore;
} PredictionRecord;